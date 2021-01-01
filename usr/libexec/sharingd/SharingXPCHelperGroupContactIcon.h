//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SharingXPCHelperContactIcon.h"

#import "NSSecureCoding-Protocol.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SharingXPCHelperGroupContactIcon : SharingXPCHelperContactIcon <NSSecureCoding>
{
    NSArray *_contacts;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100056500
- (void).cxx_destruct;	// IMP=0x00000001000569c8
@property(readonly, retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (id)description;	// IMP=0x000000010005690c
- (id)contactIDs;	// IMP=0x0000000100056774
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000566f4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100056664
- (id)initWithContacts:(id)arg1 icon:(struct CGImage *)arg2 atIndex:(long long)arg3 cacheLookupKey:(id)arg4;	// IMP=0x00000001000565c0
- (id)initWithContacts:(id)arg1 iconData:(id)arg2 atIndex:(long long)arg3 cacheLookupKey:(id)arg4;	// IMP=0x0000000100056508

@end

