/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntentResolutionResult.h>

@interface INPaymentAmountResolutionResult : INIntentResolutionResult
+(id)successWithResolvedPaymentAmount:(id)arg1 ;
+(id)disambiguationWithPaymentAmountsToDisambiguate:(id)arg1 ;
+(id)confirmationRequiredWithPaymentAmountToConfirm:(id)arg1 ;
-(id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2 ;
@end

