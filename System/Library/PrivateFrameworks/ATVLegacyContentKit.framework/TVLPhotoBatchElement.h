/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, NSArray;

@interface TVLPhotoBatchElement : TVLElement {

	NSString* _title;
	NSString* _boldTitle;
	NSString* _dimmedTitle;
	NSArray* _items;

}

@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * boldTitle;                //@synthesize boldTitle=_boldTitle - In the implementation block
@property (nonatomic,retain) NSString * dimmedTitle;              //@synthesize dimmedTitle=_dimmedTitle - In the implementation block
@property (nonatomic,retain) NSArray * items;                     //@synthesize items=_items - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(void)setBoldTitle:(NSString *)arg1 ;
-(void)setDimmedTitle:(NSString *)arg1 ;
-(NSString *)boldTitle;
-(NSString *)dimmedTitle;
@end

