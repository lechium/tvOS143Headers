/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Stocks/YQLRequest.h>

@class NSArray;

@interface SymbolValidator : YQLRequest {

	NSArray* _symbols;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)parseData:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)didParseData;
-(void)validateSymbol:(id)arg1 withMaxResults:(int)arg2 ;
@end

