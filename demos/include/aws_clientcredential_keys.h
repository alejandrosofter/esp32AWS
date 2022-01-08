/*
 * FreeRTOS V202012.00
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

/*
 ****************************************************************************
 * NOTE!
 * This file is for ease of demonstration only.  Secret information should not
 * be pasted into the header file in production devices.  Do not paste
 * production secrets here!  Production devices should store secrets such as
 * private keys securely, such as within a secure element.  See our examples that
 * demonstrate how to use the PKCS #11 API for secure keys access.
 ****************************************************************************
 */

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

/*
 * @brief PEM-encoded client certificate.
 *
 * @todo If you are running one of the FreeRTOS demo projects, set this
 * to the certificate that will be used for TLS client authentication.
 *
 * @note Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM                   "-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVAJEUIdnKsCJQR29WWRVgBiy4NT1pMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMjAxMDExNDI3\n"\
"MzZaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDDtKOdy+fW4LxD66ql\n"\
"VXNyKA8AwKqGr1Y4U/hH2qzlIPo2hHFFnWO2yNBhvFdGN//qGFHsodbpIzxgO2Qw\n"\
"5nqcPo2ZDoIQFq0+DSIsdVLbwdzl1MzwQ7WVRyHB1OGjPu3hNg3B1a52p7/eUehK\n"\
"MMrLtwDy4UxjB9QcZYe1YSEqcryOXadG7PB/aun8R6rRtYQXoh/rRIjJubxHB+9X\n"\
"gyqPMkU94B81/0H3L9tb38oLK7QIBWD8oWiXyql1P0zhKCtDdzX7tpdC2SRvl4f9\n"\
"THpvBqGCeuOQYQE8uetlvyRhWcgEptibMvprPQWbwE+uqhRU+C6ZQREPH/IOfvIX\n"\
"ww9LAgMBAAGjYDBeMB8GA1UdIwQYMBaAFPRIi9VD6LquzkiL/0YIERvK4+nNMB0G\n"\
"A1UdDgQWBBRRJuJgiepcR7sBdjpI9wi4kqWRrTAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAQYfizOPAEtxIdDk9ekYcBmmy\n"\
"9CqI5yVxJEO5nrKWJFEbnliWG2nGG8ON9cINcm1wBZW3x2n3DXjbaAj5jRHVGsyM\n"\
"1HADN0uMwbMVsHa2kaoMbWy+jhAzYEZsRrngVYeUcTQQq2ktytPXco3xqCLQweCV\n"\
"PiuwSXNNDofFgM7Pg8857Gb14yBVhwho+XnASthp0pez5+7MKT6BS2QdYHnSPYxp\n"\
"lbcImLJTxvDHNvpKCYlUvlXOPCmcY5gr6UpDV8NGqMk2ghWBBzHZcKEyl9SN4sXE\n"\
"qRAg3d89gq1q2xTLT1cgsSoT/jr4ltVJlxew0vl73LL5P2DcgK+S1d5bf+jU6Q==\n"\
"-----END CERTIFICATE-----"

/*
 * @brief PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 *
 * @todo If you are using AWS IoT Just in Time Registration (JITR), set this to
 * the issuer (Certificate Authority) certificate of the client certificate above.
 *
 * @note This setting is required by JITR because the issuer is used by the AWS
 * IoT gateway for routing the device's initial request. (The device client
 * certificate must always be sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html,
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM    NULL

/*
 * @brief PEM-encoded client private key.
 *
 * @todo If you are running one of the FreeRTOS demo projects, set this
 * to the private key that will be used for TLS client authentication.
 * Please note pasting a key into the header file in this manner is for
 * convenience of demonstration only and should not be done in production.
 * Never past a production private key here!.  Production devices should
 * store keys securely, such as within a secure element.  Additionally,
 * we provide the corePKCS library that further enhances security by
 * enabling keys to be used without exposing them to software.
 *
 * @note Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM                   "-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpQIBAAKCAQEAw7Sjncvn1uC8Q+uqpVVzcigPAMCqhq9WOFP4R9qs5SD6NoRx\n"\
"RZ1jtsjQYbxXRjf/6hhR7KHW6SM8YDtkMOZ6nD6NmQ6CEBatPg0iLHVS28Hc5dTM\n"\
"8EO1lUchwdThoz7t4TYNwdWudqe/3lHoSjDKy7cA8uFMYwfUHGWHtWEhKnK8jl2n\n"\
"Ruzwf2rp/Eeq0bWEF6If60SIybm8RwfvV4MqjzJFPeAfNf9B9y/bW9/KCyu0CAVg\n"\
"/KFol8qpdT9M4SgrQ3c1+7aXQtkkb5eH/Ux6bwahgnrjkGEBPLnrZb8kYVnIBKbY\n"\
"mzL6az0Fm8BPrqoUVPgumUERDx/yDn7yF8MPSwIDAQABAoIBAQCbPKGAXKsFHnUX\n"\
"50sQJK0Tg0ULUsixV0msGqdZz9LPWY5ASmRTVRowdjAdJrmPwIHmHe52JpYDjmio\n"\
"6NN7mobtgwzsuL5gpqw7CU3vOA1GtgtT363Ec+EIjUjwqL1msVceCrN06tud0Uh3\n"\
"wD7jArsKRpqhDid6ck5FTCAOtwII2WBboCjmE92F066DUFu3yeOGH6CvGXz5XFBl\n"\
"ODVHc/KVtrb3rZ9GUc6XYFhNYamg/rqELjgn/q/HAqY8UCPY04iNbps5fmLDsz6a\n"\
"AS+TWgXwHy/NmxNs0uR0+i/Uq6HgHvFRL0l747o0YVjhcjb9RnxHJG6yXtvVs4M3\n"\
"mkLC6K0hAoGBAO+wGnX//qxDngVP2SURQCtM16C0wRYkyfMbqwIbExlb5kAG56xv\n"\
"PuXjk91vwxSkJEyFyA/05QarjOhwKIJgAclPqmo1J/L+jTkuJEE8UBRSZfOqrTDk\n"\
"oY3J0X0osxIpVSQ7lBEMMpkTnj6+M1Epxu+tmHhuvAYkAac69XH3cz3RAoGBANEG\n"\
"RDvg215H4Q/0ek5/immM1w9tniSmnU/A1pV+ORcEk6dXjtP06co3jbZhbHc49qJH\n"\
"NLi78ZaAz6upmtNsRKgVEG5EzbQZPx5j8owSx2UkF7Madkw8pk4bZr/2EW5m1hJT\n"\
"M9liaLwcLccr+RCp1+IPyNSo2FgtFc7K3NsNIjZbAoGAIuiqIe+D3wEGHc3wWVa2\n"\
"2teZPB23VYtMIm0wLeFVmcbptP+MdG/LYF4R5hll9zak1sRRTAml5Z/MqPnU3JAx\n"\
"EmnY7xkI1Xo/hUl0HFA1dZA+qwt7p/hUkzsGmMz5r7Z3YQyQVx9Iq0TRMmAvRy3n\n"\
"fHbzEu9F0TsjRoDuyId6sFECgYEAi0JgjYA2xu6erLGWFtx0S/QwiC/hD8wNvMfe\n"\
"b0TkJki/UttL5j0i0b4HZT4tNJU4BE/qeTWGNF5nfZgG9dsJNu6pvr2KSvYTDl1K\n"\
"iDYusFzGiWYU8J/rsNgisbvwSxyqfRT/01H0M3eWrD7Itmhh01Pu2ngPg1euUtLn\n"\
"J+3tIEcCgYEAztc+0qs+XrsRzvN1SmNXg/UYpbq69LxH5HrHnvG/KmfptVyZyAQp\n"\
"ZYDTy+c0RFHsKXFUo52O/RA9R57wfPzoSlssoV6bhx3JNgXVqsgQKPg0iliDVCKr\n"\
"qmePRcHbpdbNqkyLfxsgNEGL3Oynn/O0OjWMyBD6IboExO9mcq1Y1+A=\n"\
"-----END RSA PRIVATE KEY-----"

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
