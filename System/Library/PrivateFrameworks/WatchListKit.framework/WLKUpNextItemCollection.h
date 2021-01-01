/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate, NSArray;

@interface WLKUpNextItemCollection : NSObject {

	NSString* _title;
	NSDate* _timestamp;
	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
-(id)description;
-(NSDate *)timestamp;
-(NSString *)title;
-(NSArray *)items;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
@end
