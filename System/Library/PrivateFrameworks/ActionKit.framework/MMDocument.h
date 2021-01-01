/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSString, NSArray;

@interface MMDocument : NSObject {

	NSMutableArray* _elements;
	NSString* _markdown;

}

@property (nonatomic,copy) NSArray * elements;                        //@synthesize elements=_elements - In the implementation block
@property (nonatomic,copy,readonly) NSString * markdown;              //@synthesize markdown=_markdown - In the implementation block
+(id)documentWithMarkdown:(id)arg1 ;
-(NSArray *)elements;
-(void)addElement:(id)arg1 ;
-(void)setElements:(NSArray *)arg1 ;
-(id)initWithMarkdown:(id)arg1 ;
-(NSString *)markdown;
@end
