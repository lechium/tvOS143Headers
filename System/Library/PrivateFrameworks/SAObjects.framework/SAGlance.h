/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSString, NSDictionary;

@interface SAGlance : SADomainObject

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSString * glanceDisplayName; 
@property (nonatomic,copy) NSString * glanceId; 
@property (nonatomic,copy) NSDictionary * localizedGlanceDisplayNameMap; 
+(id)glance;
+(id)glanceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setAppId:(NSString *)arg1 ;
-(NSString *)appId;
-(id)encodedClassName;
-(NSString *)glanceDisplayName;
-(void)setGlanceDisplayName:(NSString *)arg1 ;
-(NSString *)glanceId;
-(void)setGlanceId:(NSString *)arg1 ;
-(NSDictionary *)localizedGlanceDisplayNameMap;
-(void)setLocalizedGlanceDisplayNameMap:(NSDictionary *)arg1 ;
@end

