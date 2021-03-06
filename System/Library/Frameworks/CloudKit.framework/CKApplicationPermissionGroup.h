/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKApplicationPermissionGroup : NSObject <NSSecureCoding> {

	NSArray* _containerIDs;
	NSArray* _applicationBundleIDs;
	unsigned long long _enabledPermissions;

}

@property (nonatomic,copy) NSArray * containerIDs;                               //@synthesize containerIDs=_containerIDs - In the implementation block
@property (nonatomic,copy) NSArray * applicationBundleIDs;                       //@synthesize applicationBundleIDs=_applicationBundleIDs - In the implementation block
@property (assign,nonatomic) unsigned long long enabledPermissions;              //@synthesize enabledPermissions=_enabledPermissions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)containerIDs;
-(void)setContainerIDs:(NSArray *)arg1 ;
-(id)CKPropertiesDescription;
-(void)setApplicationBundleIDs:(NSArray *)arg1 ;
-(void)setEnabledPermissions:(unsigned long long)arg1 ;
-(NSArray *)applicationBundleIDs;
-(unsigned long long)enabledPermissions;
@end

