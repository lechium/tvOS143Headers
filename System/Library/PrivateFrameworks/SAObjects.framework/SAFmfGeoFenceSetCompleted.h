/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAFmfGeoFence, NSURL, NSString;

@interface SAFmfGeoFenceSetCompleted : SADomainCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAFmfGeoFence * geoFence; 
@property (nonatomic,copy) NSURL * searchContext; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)geoFenceSetCompleted;
+(id)geoFenceSetCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)searchContext;
-(void)setSearchContext:(NSURL *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAFmfGeoFence *)geoFence;
-(void)setGeoFence:(SAFmfGeoFence *)arg1 ;
@end

