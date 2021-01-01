/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVXExpressionParsingServing.h>

@class AFSpeakableUtteranceParser, NSString;

@interface SVXTStubExpressionParsingService : NSObject <SVXExpressionParsingServing> {

	AFSpeakableUtteranceParser* _englishStubParser;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)parseExpressions:(id)arg1 targetDevice:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

