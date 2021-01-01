//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATSimpleElement.h"

@class NSArray, NSString;
@protocol SCATMultipleMenuItemsElementDelegate;

@interface SCATMultipleMenuItemsElement : SCATSimpleElement
{
    NSString *_identifier;	// 8 = 0x8
    NSArray *_menuItems;	// 16 = 0x10
    id <SCATMultipleMenuItemsElementDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010005b480
@property(nonatomic) __weak id <SCATMultipleMenuItemsElementDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x000000010005b30c
- (_Bool)scatPerformAction:(int)arg1;	// IMP=0x000000010005b180
- (void)scatDidBecomeFocused:(_Bool)arg1;	// IMP=0x000000010005b00c
- (_Bool)scatIndicatesOwnFocus;	// IMP=0x000000010005b004

@end

