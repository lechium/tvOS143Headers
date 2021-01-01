/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSURL;

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * error; 
@property (nonatomic,copy) NSURL * weatherLocationId; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)locationAddCompleted;
+(id)locationAddCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)locationAddCompletedWithError:(id)arg1 ;
+(id)locationAddCompletedWithWeatherLocationId:(id)arg1 ;
-(NSString *)error;
-(void)setError:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)initWithError:(id)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)initWithWeatherLocationId:(id)arg1 ;
-(void)setWeatherLocationId:(NSURL *)arg1 ;
-(NSURL *)weatherLocationId;
@end

