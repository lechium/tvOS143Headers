/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BrailleTranslation/BRLTTranslationService.h>

@class BRLTSLoopbackTranslationService;

@interface BRLTLoopbackTranslationService : BRLTTranslationService {

	BRLTSLoopbackTranslationService* _loopbackService;

}

@property (nonatomic,retain) BRLTSLoopbackTranslationService * loopbackService;              //@synthesize loopbackService=_loopbackService - In the implementation block
-(BOOL)isLoopback;
-(id)initWithServiceIdentifier:(id)arg1 connection:(id)arg2 loopbackService:(id)arg3 ;
-(BRLTSLoopbackTranslationService *)loopbackService;
-(void)setLoopbackService:(BRLTSLoopbackTranslationService *)arg1 ;
@end
