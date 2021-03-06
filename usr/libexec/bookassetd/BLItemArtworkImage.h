//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BLItemArtworkImage : NSObject <NSCopying>
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
    NSString *_imageKind;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100059728
@property(copy, nonatomic) NSString *imageKind; // @synthesize imageKind=_imageKind;
- (void)_setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010005963c
@property(readonly, nonatomic) NSString *URLString;
- (void)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000001000595d8
@property(retain, nonatomic) NSURL *URL;
- (void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2;	// IMP=0x000000010005944c
@property(readonly, nonatomic) struct CGSize imageSize;
- (id)initWithArtworkDictionary:(id)arg1;	// IMP=0x0000000100059380
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000592b4
- (unsigned long long)hash;	// IMP=0x000000010005925c
- (id)description;	// IMP=0x000000010005914c
- (id)valueForProperty:(id)arg1;	// IMP=0x000000010005913c
- (long long)width;	// IMP=0x0000000100058ffc
@property(readonly, nonatomic) double imageScale;
- (long long)height;	// IMP=0x0000000100058ed4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100058e48

@end

