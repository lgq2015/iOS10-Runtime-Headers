/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class NSDictionary;

@interface SCNMaterialAttachment : NSObject  {
    unsigned int glID;
    unsigned int target;
    void *context;
    struct CGSize { 
        double width; 
        double height; 
    } size;
    NSDictionary *options;
}

@property unsigned int glID;
@property unsigned int target;
@property void* context;
@property struct CGSize { double x1; double x2; } size;
@property(copy) NSDictionary * options;


- (void)setGlID:(unsigned int)arg1;
- (unsigned int)glID;
- (void*)context;
- (void)setContext:(void*)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTarget:(unsigned int)arg1;
- (id)options;
- (void)setOptions:(id)arg1;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })size;
- (unsigned int)target;

@end