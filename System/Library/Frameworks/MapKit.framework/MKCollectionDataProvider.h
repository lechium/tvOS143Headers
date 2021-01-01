/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MKCollectionDataProvider <NSObject>
@optional
-(id)collections;
-(long long)numberOfSections;
-(id)geoCollectionAtIndex:(long long)arg1;
-(id)collectionAtIndex:(long long)arg1;
-(long long)numberOfCollections;

@required
-(void)refreshCollections;
-(void)displayCollections;

@end

