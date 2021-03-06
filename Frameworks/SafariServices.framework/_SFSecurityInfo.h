/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSecurityInfo : NSObject <NSSecureCoding> {
    NSURL * _assessedURL;
    bool  _hasWarnedUser;
    SSBLookupResult * _result;
}

@property (nonatomic, retain) NSURL *assessedURL;
@property (nonatomic) bool hasWarnedUser;
@property (nonatomic, copy) SSBLookupResult *result;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assessedURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasWarnedUser;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 result:(id)arg2 hasWarnedUser:(bool)arg3;
- (bool)isKnownToBeUnsafe;
- (id)result;
- (id)securityTypeDescription;
- (void)setAssessedURL:(id)arg1;
- (void)setHasWarnedUser:(bool)arg1;
- (void)setResult:(id)arg1;

@end
