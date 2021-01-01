/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, HMAccessoryCategory;

@interface HMDAccessoryAdvertisement : NSObject {

	NSString* _identifier;
	NSString* _name;
	HMAccessoryCategory* _category;

}

@property (nonatomic,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (readonly) long long associationOptions; 
@property (nonatomic,readonly) HMAccessoryCategory * category;              //@synthesize category=_category - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(HMAccessoryCategory *)category;
-(long long)associationOptions;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 ;
@end
