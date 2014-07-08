/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSMutableArray, NSXPCConnection;

@interface SFCompanionXPCManager : NSObject  {
    bool_invalid;
    bool_interrupted;
    NSXPCConnection *_connection;
    NSMutableArray *_observers;
}

@property(getter=isInvalid) bool invalid;
@property bool interrupted;
@property(retain) NSXPCConnection * connection;
@property(retain) NSMutableArray * observers;

+ (id)hotspotInterface;
+ (id)hotspotClientInterface;
+ (id)unlockInterface;
+ (id)scannerInterface;
+ (id)scannerClientInterface;
+ (id)advertiserInterface;
+ (id)advertiserClientInterface;
+ (id)browserInterface;
+ (id)browserClientInterface;
+ (id)connectionManagerInterface;
+ (id)connectionManagerClientInterface;
+ (id)serviceManagerInterface;
+ (id)serviceManagerClientInterface;
+ (id)xpcManagerInterface;
+ (id)sharedManager;
+ (void)initialize;

- (void)companionStreamsForService:(id)arg1 withCompletionHandler:(id)arg2;
- (void)companionConnectionProxyForService:(id)arg1 client:(id)arg2 withCompletionHandler:(id)arg3;
- (void)serviceManagerProxyForIdentifier:(id)arg1 client:(id)arg2 withCompletionHandler:(id)arg3;
- (void)companionBrowserProxyforIdentifier:(id)arg1 serviceType:(id)arg2 client:(id)arg3 withCompletionHandler:(id)arg4;
- (void)notifyOfResume;
- (void)notifyOfInvalidation;
- (bool)interrupted;
- (void)notifyObservers;
- (void)setInterrupted:(bool)arg1;
- (void)setupConnection;
- (void)continuityScannerProxyForClient:(id)arg1 withCompletionHandler:(id)arg2;
- (void)activityAdvertiserProxyForClient:(id)arg1 withCompletionHandler:(id)arg2;
- (void)unregisterObserver:(id)arg1;
- (void)unlockManagerWithCompletionHandler:(id)arg1;
- (void)registerObserver:(id)arg1;
- (bool)isInvalid;
- (id)observers;
- (void)setObservers:(id)arg1;
- (id)connection;
- (id)init;
- (void)setInvalid:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)dealloc;

@end