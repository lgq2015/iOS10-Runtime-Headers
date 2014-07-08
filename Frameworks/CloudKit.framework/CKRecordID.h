/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString, CKRecordZoneID;

@interface CKRecordID : NSObject <NSSecureCoding, NSCopying> {
    NSString *_recordName;
    CKRecordZoneID *_zoneID;
}

@property(retain) NSString * recordName;
@property(retain) CKRecordZoneID * zoneID;

+ (bool)supportsSecureCoding;
+ (id)contentsRecordIDForItemID:(id)arg1 zoneName:(id)arg2;
+ (id)structureRecordIDForItemID:(id)arg1 zoneName:(id)arg2 forType:(BOOL)arg3;

- (void)setZoneID:(id)arg1;
- (id)initWithRecordName:(id)arg1 zoneID:(id)arg2;
- (id)initWithRecordName:(id)arg1;
- (id)zoneID;
- (id)initWithSqliteRepresentation:(id)arg1;
- (id)sqliteRepresentation;
- (id)ckShortDescription;
- (id)CKPropertiesDescription;
- (void)setRecordName:(id)arg1;
- (id)recordName;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)brc_aliasTarget;
- (BOOL)brc_itemType;
- (id)brc_itemID;
- (bool)markServerItemDeadInContainer:(id)arg1 stateIsInconsistent:(bool)arg2;

@end