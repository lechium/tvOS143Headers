//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSString;

@interface GKAccount : NSObject
{
    ACAccount *_internalAccount;	// 8 = 0x8
}

@property(readonly, retain, nonatomic) ACAccount *internalAccount; // @synthesize internalAccount=_internalAccount;
- (_Bool)isEnabledForDataClass:(id)arg1;	// IMP=0x000000010012f348
@property(readonly, retain, nonatomic) NSString *authToken; // @dynamic authToken;
@property(readonly, retain, nonatomic) NSString *username; // @dynamic username;
@property(readonly, retain, nonatomic) NSString *personID; // @dynamic personID;
- (void)dealloc;	// IMP=0x000000010012f2d0
- (id)initWithInternalAccount:(id)arg1;	// IMP=0x000000010012f278

@end
