/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SVXExpressionParsingServing;
@interface _SVXExpressionParser : NSObject {

	id<SVXExpressionParsingServing> _parsingService;

}

@property (nonatomic,retain) id<SVXExpressionParsingServing> parsingService;              //@synthesize parsingService=_parsingService - In the implementation block
-(id)init;
-(id)initWithParsingService:(id)arg1 ;
-(id<SVXExpressionParsingServing>)parsingService;
-(void)setParsingService:(id<SVXExpressionParsingServing>)arg1 ;
@end
