//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CADisplayLink, NSCalendar, NSDateComponents, TVSMClockView;

@interface TVSMClockViewController : UIViewController
{
    NSCalendar *_calendar;	// 8 = 0x8
    TVSMClockView *_clockView;	// 16 = 0x10
    CADisplayLink *_displayLink;	// 24 = 0x18
    NSDateComponents *_lastDateComponents;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100009c14
@property(readonly, nonatomic) NSDateComponents *lastDateComponents; // @synthesize lastDateComponents=_lastDateComponents;
@property(readonly, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(readonly, nonatomic) TVSMClockView *clockView; // @synthesize clockView=_clockView;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (void)_setClockDate:(id)arg1;	// IMP=0x00000001000099b0
- (void)_handleDisplayLink:(id)arg1;	// IMP=0x000000010000995c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000098f8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000097dc
- (void)loadView;	// IMP=0x000000010000978c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000096e4

@end

