/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SSLookupItem, NSDate;

@interface TVCKStoreContentMetadataCacheEntry : NSObject {

	SSLookupItem* _item;
	NSDate* _expirationDate;

}

@property (nonatomic,retain) SSLookupItem * item;                //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setItem:(SSLookupItem *)arg1 ;
-(SSLookupItem *)item;
@end
