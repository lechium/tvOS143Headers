/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSThread, NSMutableArray, NSArray;

@interface AXEventProcessor : NSObject {

	BOOL _shouldRunHIDReceiveThreadRunloop;
	BOOL _shouldNotifyUserEventOccurred;
	BOOL _handlingHIDEvents;
	BOOL _ignoreAllSystemEvents;
	BOOL _handlingSystemEvents;
	int _HIDEventTapPriority;
	int _systemEventTapPriority;
	NSString* _HIDEventTapIdentifier;
	NSThread* _HIDEventReceiveThread;
	/*^block*/id _HIDEventHandler;
	unsigned long long _HIDEventFilterMask;
	/*^block*/id _failedToHandleEventInTime;
	NSString* _systemEventTapIdentifier;
	/*^block*/id _systemEventHandler;
	NSMutableArray* _hidActualEventTapEnabledReasons;
	NSMutableArray* _systemActualEventTapEnabledReasons;

}

@property (nonatomic,retain) NSString * HIDEventTapIdentifier;                                     //@synthesize HIDEventTapIdentifier=_HIDEventTapIdentifier - In the implementation block
@property (assign,nonatomic) int HIDEventTapPriority;                                              //@synthesize HIDEventTapPriority=_HIDEventTapPriority - In the implementation block
@property (nonatomic,retain) NSThread * HIDEventReceiveThread;                                     //@synthesize HIDEventReceiveThread=_HIDEventReceiveThread - In the implementation block
@property (assign,getter=isHandlingHIDEvents,nonatomic) BOOL handlingHIDEvents;                    //@synthesize handlingHIDEvents=_handlingHIDEvents - In the implementation block
@property (nonatomic,retain) NSMutableArray * hidActualEventTapEnabledReasons;                     //@synthesize hidActualEventTapEnabledReasons=_hidActualEventTapEnabledReasons - In the implementation block
@property (nonatomic,retain) NSString * systemEventTapIdentifier;                                  //@synthesize systemEventTapIdentifier=_systemEventTapIdentifier - In the implementation block
@property (assign,nonatomic) int systemEventTapPriority;                                           //@synthesize systemEventTapPriority=_systemEventTapPriority - In the implementation block
@property (assign,getter=isHandlingSystemEvents,nonatomic) BOOL handlingSystemEvents;              //@synthesize handlingSystemEvents=_handlingSystemEvents - In the implementation block
@property (nonatomic,retain) NSMutableArray * systemActualEventTapEnabledReasons;                  //@synthesize systemActualEventTapEnabledReasons=_systemActualEventTapEnabledReasons - In the implementation block
@property (assign,nonatomic) BOOL shouldNotifyUserEventOccurred;                                   //@synthesize shouldNotifyUserEventOccurred=_shouldNotifyUserEventOccurred - In the implementation block
@property (nonatomic,copy) id HIDEventHandler;                                                     //@synthesize HIDEventHandler=_HIDEventHandler - In the implementation block
@property (assign,nonatomic) unsigned long long HIDEventFilterMask;                                //@synthesize HIDEventFilterMask=_HIDEventFilterMask - In the implementation block
@property (nonatomic,copy) id failedToHandleEventInTime;                                           //@synthesize failedToHandleEventInTime=_failedToHandleEventInTime - In the implementation block
@property (nonatomic,readonly) NSArray * hidEventTapEnabledReasons; 
@property (nonatomic,copy) id systemEventHandler;                                                  //@synthesize systemEventHandler=_systemEventHandler - In the implementation block
@property (assign,nonatomic) BOOL ignoreAllSystemEvents;                                           //@synthesize ignoreAllSystemEvents=_ignoreAllSystemEvents - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * systemEventTapEnabledReasons; 
-(id)init;
-(void)dealloc;
-(void)cleanup;
-(id)initWithHIDTapIdentifier:(id)arg1 HIDEventTapPriority:(int)arg2 systemEventTapIdentifier:(id)arg3 systemEventTapPriority:(int)arg4 ;
-(void)setHIDEventTapIdentifier:(NSString *)arg1 ;
-(void)setHIDEventTapPriority:(int)arg1 ;
-(void)setHIDEventFilterMask:(unsigned long long)arg1 ;
-(void)setSystemEventTapIdentifier:(NSString *)arg1 ;
-(void)setSystemEventTapPriority:(int)arg1 ;
-(void)setHidActualEventTapEnabledReasons:(NSMutableArray *)arg1 ;
-(void)setSystemActualEventTapEnabledReasons:(NSMutableArray *)arg1 ;
-(void)_runHIDEventReceiveThread;
-(NSMutableArray *)hidActualEventTapEnabledReasons;
-(void)_uninstallHIDEventFilter;
-(NSString *)HIDEventTapIdentifier;
-(BOOL)isHandlingHIDEvents;
-(void)setHandlingHIDEvents:(BOOL)arg1 ;
-(void)_installHIDEventFilter;
-(int)HIDEventTapPriority;
-(NSMutableArray *)systemActualEventTapEnabledReasons;
-(NSString *)systemEventTapIdentifier;
-(BOOL)isHandlingSystemEvents;
-(void)setHandlingSystemEvents:(BOOL)arg1 ;
-(void)_installSystemEventFilter;
-(void)_uninstallSystemEventFilter;
-(int)systemEventTapPriority;
-(unsigned long long)HIDEventFilterMask;
-(BOOL)shouldNotifyUserEventOccurred;
-(id)HIDEventHandler;
-(id)failedToHandleEventInTime;
-(id)systemEventHandler;
-(NSArray *)hidEventTapEnabledReasons;
-(void)_threadStop;
-(void)beginHandlingHIDEventsForReason:(id)arg1 ;
-(void)endHandlingHIDEventsForReason:(id)arg1 ;
-(void)raiseHIDEventTapPriorityToMaximum;
-(void)restoreHIDEventTapPriorityToDefault;
-(NSArray *)systemEventTapEnabledReasons;
-(void)beginHandlingSystemEventsForReason:(id)arg1 ;
-(void)endHandlingSystemEventsForReason:(id)arg1 ;
-(void)raiseSystemEventTapPriorityToMaximum;
-(void)restoreSystemEventTapPriorityToDefault;
-(void)setShouldNotifyUserEventOccurred:(BOOL)arg1 ;
-(NSThread *)HIDEventReceiveThread;
-(void)setHIDEventReceiveThread:(NSThread *)arg1 ;
-(void)setHIDEventHandler:(id)arg1 ;
-(void)setFailedToHandleEventInTime:(id)arg1 ;
-(void)setSystemEventHandler:(id)arg1 ;
-(BOOL)ignoreAllSystemEvents;
-(void)setIgnoreAllSystemEvents:(BOOL)arg1 ;
@end

