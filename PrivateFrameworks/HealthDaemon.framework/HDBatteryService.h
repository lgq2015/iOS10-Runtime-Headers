/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDBatteryService : HDHealthService {
    CBCharacteristic * _batteryCharacteristic;
    HDHealthServicePropertyManager * _propertyManager;
}

@property (nonatomic, retain) CBCharacteristic *batteryCharacteristic;
@property (nonatomic) HDHealthServicePropertyManager *propertyManager;

+ (id)implementedProperties;
+ (long long)serviceType;
+ (id)serviceUUID;

- (void).cxx_destruct;
- (id)batteryCharacteristic;
- (id)handleBatteryLevel:(id)arg1;
- (id)initWithDevicePropertyManager:(id)arg1 healthDaemon:(id)arg2 peripheral:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (id)propertyManager;
- (void)readProperty:(id)arg1;
- (void)setBatteryCharacteristic:(id)arg1;
- (void)setPropertyManager:(id)arg1;

@end