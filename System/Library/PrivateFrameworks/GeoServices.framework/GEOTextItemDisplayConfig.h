/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOTextItemDisplayConfig.h>

@protocol GEOTextItemDisplayConfig
@property (nonatomic,readonly) unsigned maxItemsPerRow; 
@property (nonatomic,readonly) unsigned maxRowCount; 
@required
-(unsigned)maxItemsPerRow;
-(unsigned)maxRowCount;

@end


@interface GEOTextItemDisplayConfig : NSObject <GEOTextItemDisplayConfig> {

	unsigned _maxItemsPerRow;
	unsigned _maxRowCount;

}

@property (nonatomic,readonly) unsigned maxItemsPerRow;              //@synthesize maxItemsPerRow=_maxItemsPerRow - In the implementation block
@property (nonatomic,readonly) unsigned maxRowCount;                 //@synthesize maxRowCount=_maxRowCount - In the implementation block
-(id)init;
-(unsigned)maxItemsPerRow;
-(unsigned)maxRowCount;
-(id)initWithMaxItemsPerRow:(unsigned)arg1 maxRowCount:(unsigned)arg2 ;
-(id)initWithTextItemDisplayConfig:(id)arg1 ;
@end

