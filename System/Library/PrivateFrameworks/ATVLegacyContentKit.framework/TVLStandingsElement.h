/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLRootElement.h>

@class TVLHeaderElement, NSArray;

@interface TVLStandingsElement : TVLRootElement {

	TVLHeaderElement* _header;
	NSArray* _standingsItems;

}

@property (nonatomic,retain) TVLHeaderElement * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSArray * standingsItems;               //@synthesize standingsItems=_standingsItems - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(TVLHeaderElement *)header;
-(void)setHeader:(TVLHeaderElement *)arg1 ;
-(NSArray *)standingsItems;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(void)setStandingsItems:(NSArray *)arg1 ;
@end

