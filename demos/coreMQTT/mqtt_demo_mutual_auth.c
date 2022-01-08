/*
 * FreeRTOS V202107.00
 * Copyright (C) 2021 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
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
 * http://www.FreeRTOS.org
 * http://aws.amazon.com/freertos
 *
 */

/*
 * Demo for showing use of the MQTT API using a mutually authenticated
 * network connection.
 *
 * The Example shown below uses MQTT APIs to create MQTT messages and send them
 * over the mutually authenticated network connection established with the
 * MQTT broker. This example is single threaded and uses statically allocated
 * memory. It uses QoS1 for sending to and receiving messages from the broker.
 *
 * A mutually authenticated TLS connection is used to connect to the
 * MQTT message broker in this example. Define democonfigMQTT_BROKER_ENDPOINT
 * and democonfigROOT_CA_PEM, in mqtt_demo_mutual_auth_config.h, and the client
 * private key and certificate, in aws_clientcredential_keys.h, to establish a
 * mutually authenticated connection.
 */

/**
 * @file mqtt_demo_mutual_auth.c
 * @brief Demonstrates usage of the MQTT library.
 */

/* Standard includes. */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Demo Specific configs. */
#include "mqtt_demo_mutual_auth_config.h"

/* Include common demo header. */
#include "aws_demo.h"

/* Kernel includes. */
#include "FreeRTOS.h"
#include "task.h"

/* MQTT library includes. */
#include "core_mqtt.h"

/* Retry utilities include. */
#include "backoff_algorithm.h"

/* Include PKCS11 helpers header. */
#include "pkcs11_helpers.h"

/* Transport interface implementation include header for TLS. */
#include "transport_secure_sockets.h"

/* Include header for connection configurations. */
#include "aws_clientcredential.h"

/* Include header for client credentials. */
#include "aws_clientcredential_keys.h"

/* Include header for root CA certificates. */
#include "iot_default_root_certificates.h"

/* Include AWS IoT metrics macros header. */
#include "aws_iot_metrics.h"


int RunCoreMqttMutualAuthDemo( bool awsIotMqttMode,
                               const char * pIdentifier,
                               void * pNetworkServerInfo,
                               void * pNetworkCredentialInfo,
                               const IotNetworkInterface_t * pNetworkInterface )
{
 
   configPRINTF( ("Imprimio algo r\n") );
    return EXIT_SUCCESS;
}
