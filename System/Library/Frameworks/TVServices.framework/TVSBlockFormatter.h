/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSFormatter.h>

@interface TVSBlockFormatter : NSFormatter {

	/*^block*/id _formattingBlock;
	/*^block*/id _reverseFormattingBlock;

}

@property (nonatomic,copy) id formattingBlock;                     //@synthesize formattingBlock=_formattingBlock - In the implementation block
@property (nonatomic,copy) id reverseFormattingBlock;              //@synthesize reverseFormattingBlock=_reverseFormattingBlock - In the implementation block
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)initWithFormattingBlock:(/*^block*/id)arg1 ;
-(id)formattingBlock;
-(void)setFormattingBlock:(id)arg1 ;
-(id)reverseFormattingBlock;
-(void)setReverseFormattingBlock:(id)arg1 ;
@end

