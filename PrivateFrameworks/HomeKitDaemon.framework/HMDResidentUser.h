/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentUser : HMDUser {
    unsigned long long  _configurationState;
    NSString * _deviceIdentifier;
    NSString * _displayName;
}

@property (nonatomic) unsigned long long configurationState;
@property (nonatomic, readonly, copy) NSString *deviceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)configurationState;
- (bool)configureWithIDSDevice:(id)arg1;
- (id)deviceIdentifier;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)encodingRemoteDisplayName;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 pairingIdentity:(id)arg2 displayName:(id)arg3 deviceIdentifier:(id)arg4 configurationState:(unsigned long long)arg5;
- (bool)mergeFromUser:(id)arg1 dataVersion:(long long)arg2;
- (void)setConfigurationState:(unsigned long long)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;

@end
