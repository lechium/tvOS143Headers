//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SecXPCHelper : NSObject
{
}

+ (id)encodedDataFromError:(id)arg1;	// IMP=0x000000010001cba8
+ (id)errorFromEncodedData:(id)arg1;	// IMP=0x000000010001cb08
+ (id)cleanseErrorForXPC:(id)arg1;	// IMP=0x000000010001ca00
+ (id)cleanObjectForXPC:(id)arg1;	// IMP=0x000000010001c31c
+ (id)cleanDictionaryForXPC:(id)arg1;	// IMP=0x000000010001c174
+ (id)safeErrorClasses;	// IMP=0x000000010001c134
+ (id)safeErrorCollectionClasses;	// IMP=0x000000010001c0f4
+ (id)safeCKErrorPrimitiveClasses;	// IMP=0x000000010001c0b4
+ (id)safeErrorPrimitiveClasses;	// IMP=0x000000010001c074

@end
