/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class SALocalSearchMapItem;

@interface SALocalSearchAddItemToMapCache : SADomainCommand

@property (nonatomic,retain) SALocalSearchMapItem * mapItem; 
+(id)addItemToMapCache;
+(id)addItemToMapCacheWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setMapItem:(SALocalSearchMapItem *)arg1 ;
-(SALocalSearchMapItem *)mapItem;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
