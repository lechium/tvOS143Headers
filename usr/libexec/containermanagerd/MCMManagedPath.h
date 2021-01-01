//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCMManagedPath-Protocol.h"

@class MCMFSNode, MCMPOSIXUser, NSString, NSURL;
@protocol MCMManagedPath;

@interface MCMManagedPath : NSObject <MCMManagedPath>
{
    unsigned short _mode;	// 8 = 0x8
    int _dpClass;	// 12 = 0xc
    NSURL *_url;	// 16 = 0x10
    unsigned long long _flags;	// 24 = 0x18
    unsigned long long _ACLConfig;	// 32 = 0x20
    MCMPOSIXUser *_owner;	// 40 = 0x28
    id <MCMManagedPath> _parent;	// 48 = 0x30
    MCMFSNode *_fsNode;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000507e8
@property(retain, nonatomic) MCMFSNode *fsNode; // @synthesize fsNode=_fsNode;
@property(readonly, nonatomic) id <MCMManagedPath> parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) MCMPOSIXUser *owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) int dpClass; // @synthesize dpClass=_dpClass;
@property(readonly, nonatomic) unsigned short mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) unsigned long long ACLConfig; // @synthesize ACLConfig=_ACLConfig;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100050644
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000505c8
- (_Bool)isEqualToManagedPath:(id)arg1;	// IMP=0x00000001000505b4
@property(readonly) unsigned long long hash;
- (id)managedPathByAppendingPathComponent:(id)arg1 flags:(unsigned long long)arg2 ACLConfig:(unsigned long long)arg3 mode:(unsigned short)arg4 dpClass:(int)arg5 owner:(id)arg6;	// IMP=0x0000000100050498
- (id)initWithURL:(id)arg1 flags:(unsigned long long)arg2 ACLConfig:(unsigned long long)arg3 mode:(unsigned short)arg4 dpClass:(int)arg5 owner:(id)arg6 parent:(id)arg7;	// IMP=0x0000000100050398

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

