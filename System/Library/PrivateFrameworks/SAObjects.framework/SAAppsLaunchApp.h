/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAppsLaunchApp : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * applicationClientIdentifier; 
@property (nonatomic,copy) NSString * executionEnvironment; 
@property (nonatomic,copy) NSString * launchId; 
+(id)launchApp;
+(id)launchAppWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)launchId;
-(void)setLaunchId:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)applicationClientIdentifier;
-(void)setApplicationClientIdentifier:(NSString *)arg1 ;
-(NSString *)executionEnvironment;
-(void)setExecutionEnvironment:(NSString *)arg1 ;
@end

