//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ACLSTypeVerifier : NSObject
{
    NSDictionary *_template;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100005634
@property(retain) NSDictionary *template; // @synthesize template=_template;
- (id)sanitize:(id)arg1 withTemplate:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x00000001000051e8
- (_Bool)verify:(id)arg1 name:(id)arg2 withTemplate:(id)arg3 tag:(unsigned int)arg4;	// IMP=0x0000000100004a90
- (id)sanitize:(id)arg1 tag:(unsigned int)arg2;	// IMP=0x0000000100004a00
- (_Bool)verify:(id)arg1 name:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000100004954
- (id)initWithTemplate:(id)arg1;	// IMP=0x00000001000048e0

@end

