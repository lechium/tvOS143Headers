/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/_SFCiphertext.h>

@class _SFCiphertext;

@interface SFWrappedKeyCiphertext : _SFCiphertext {

	id _wrappedKeyCiphertextInternal;

}

@property (readonly) _SFCiphertext * ciphertextKey; 
-(_SFCiphertext *)ciphertextKey;
-(id)initWithCiphertext:(id)arg1 ciphertextKey:(id)arg2 ;
@end
