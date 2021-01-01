/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, TVLImageElement, TVLTableElement;

@interface TVLStandingsItemElement : TVLElement {

	NSString* _title;
	TVLImageElement* _backgroundImage;
	TVLTableElement* _table;

}

@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) TVLImageElement * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) TVLTableElement * table;                        //@synthesize table=_table - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(TVLImageElement *)backgroundImage;
-(void)setBackgroundImage:(TVLImageElement *)arg1 ;
-(TVLTableElement *)table;
-(void)setTable:(TVLTableElement *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
@end

