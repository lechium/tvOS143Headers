/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAEndpoint.h>

@class NSString;

@interface SAEndpointPlugin : SAEndpoint

@property (nonatomic,copy) NSString * pluginPath; 
+(id)endpointPlugin;
+(id)endpointPluginWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)pluginPath;
-(id)encodedClassName;
-(void)setPluginPath:(NSString *)arg1 ;
@end

