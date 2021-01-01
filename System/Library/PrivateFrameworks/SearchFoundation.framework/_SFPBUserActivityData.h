/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBUserActivityData.h>
@class NSString, NSArray, NSData;


@protocol _SFPBUserActivityData <NSObject>
@property (nonatomic,copy) NSString * activityType; 
@property (nonatomic,copy) NSArray * userInfos; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSString *)activityType;
-(void)setActivityType:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(void)addUserInfo:(id)arg1;
-(NSArray *)userInfos;
-(void)clearUserInfo;
-(unsigned long long)userInfoCount;
-(id)userInfoAtIndex:(unsigned long long)arg1;
-(void)setUserInfos:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface _SFPBUserActivityData : PBCodable <_SFPBUserActivityData, NSSecureCoding> {

	NSString* _activityType;
	NSArray* _userInfos;

}

@property (nonatomic,copy) NSString * activityType;                 //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy) NSArray * userInfos;                     //@synthesize userInfos=_userInfos - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)activityType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(void)addUserInfo:(id)arg1 ;
-(NSArray *)userInfos;
-(void)clearUserInfo;
-(unsigned long long)userInfoCount;
-(id)userInfoAtIndex:(unsigned long long)arg1 ;
-(void)setUserInfos:(NSArray *)arg1 ;
@end
