/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSPurchasableItem.h>

@interface SSPurchasableAppItem : SSPurchasableItem
+(id)databaseTable;
+(id)allPropertyKeys;
+(id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(BOOL)arg5 ;
+(id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(BOOL)arg4 ;
+(id)sortByNameKey;
-(id)description;
-(id)bundleID;
-(id)category;
-(id)accountIdentifier;
-(id)iconURL;
-(id)companyName;
-(BOOL)isPreorder;
-(BOOL)hasMessagesExtension;
-(BOOL)is32BitOnly;
-(long long)contentRatingFlags;
-(id)iconTitle;
-(BOOL)isFamilyShareable;
-(BOOL)isHiddenFromSpringBoard;
-(BOOL)isNewsstand;
-(id)longTitle;
-(unsigned)minimumOS;
-(id)ovalIconURLString;
-(BOOL)supportsIPad;
-(BOOL)supportsIPhone;
-(id)redownloadParams;
-(id)humanReadableVersion;
-(long long)iTunesVersion;
-(id)requiredCapabilitiesString;
@end

