/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMPRateMediaEntity : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * hashedRouteUID; 
@property (assign,nonatomic) long long rating; 
+(id)rateMediaEntity;
+(id)rateMediaEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(long long)rating;
-(void)setRating:(long long)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)hashedRouteUID;
-(void)setHashedRouteUID:(NSString *)arg1 ;
@end
