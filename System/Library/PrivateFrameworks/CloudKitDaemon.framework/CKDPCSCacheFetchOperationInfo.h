/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKDatabaseOperationInfo.h>

@protocol CKSQLiteItem;
@class CKDPCSCache;

@interface CKDPCSCacheFetchOperationInfo : CKDatabaseOperationInfo {

	id<CKSQLiteItem> _itemID;
	CKDPCSCache* _cache;
	unsigned long long _options;

}

@property (nonatomic,retain) id<CKSQLiteItem> itemID;                 //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) CKDPCSCache * cache;                     //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(CKDPCSCache *)cache;
-(id<CKSQLiteItem>)itemID;
-(void)setItemID:(id<CKSQLiteItem>)arg1 ;
-(void)setCache:(CKDPCSCache *)arg1 ;
@end

