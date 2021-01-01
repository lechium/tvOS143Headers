/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CNApplicationProxy : NSObject <NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSString* _teamIdentifier;
	NSString* _localizedName;
	NSArray* _activityTypes;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * teamIdentifier;                //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                 //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSArray * activityTypes;                  //@synthesize activityTypes=_activityTypes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)localizedName;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)teamIdentifier;
-(void)setLocalizedName:(NSString *)arg1 ;
-(id)initWithLSApplicationProxy:(id)arg1 ;
-(NSArray *)activityTypes;
-(id)initWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 localizedName:(id)arg3 activityTypes:(id)arg4 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(void)setActivityTypes:(NSArray *)arg1 ;
@end

