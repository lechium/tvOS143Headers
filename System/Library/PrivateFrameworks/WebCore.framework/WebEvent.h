/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebCore/WebCore-Structs.h>
@class NSString, NSArray;

@interface WebEvent : NSObject {

	int _type;
	double _timestamp;
	CGPoint _locationInWindow;
	NSString* _characters;
	NSString* _charactersIgnoringModifiers;
	unsigned _modifierFlags;
	BOOL _keyRepeating;
	unsigned long long _keyboardFlags;
	NSString* _inputManagerHint;
	unsigned short _keyCode;
	BOOL _tabKey;
	float _deltaX;
	float _deltaY;
	unsigned _touchCount;
	NSArray* _touchLocations;
	NSArray* _touchIdentifiers;
	NSArray* _touchPhases;
	BOOL _isGesture;
	float _gestureScale;
	float _gestureRotation;
	BOOL _wasHandled;

}

@property (nonatomic,readonly) int type;                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) CGPoint locationInWindow; 
@property (nonatomic,retain,readonly) NSString * characters; 
@property (nonatomic,retain,readonly) NSString * charactersIgnoringModifiers; 
@property (nonatomic,readonly) unsigned modifierFlags; 
@property (getter=isKeyRepeating,nonatomic,readonly) BOOL keyRepeating; 
@property (nonatomic,retain,readonly) NSString * inputManagerHint; 
@property (nonatomic,readonly) unsigned long long keyboardFlags; 
@property (nonatomic,readonly) unsigned short keyCode; 
@property (getter=isTabKey,nonatomic,readonly) BOOL tabKey; 
@property (nonatomic,readonly) float deltaX; 
@property (nonatomic,readonly) float deltaY; 
@property (nonatomic,readonly) unsigned touchCount; 
@property (nonatomic,retain,readonly) NSArray * touchLocations; 
@property (nonatomic,retain,readonly) NSArray * touchIdentifiers; 
@property (nonatomic,retain,readonly) NSArray * touchPhases; 
@property (nonatomic,readonly) BOOL isGesture; 
@property (nonatomic,readonly) float gestureScale; 
@property (nonatomic,readonly) float gestureRotation; 
@property (assign,nonatomic) BOOL wasHandled;                                              //@synthesize wasHandled=_wasHandled - In the implementation block
+(unsigned)modifierFlags;
-(id)description;
-(void)dealloc;
-(int)type;
-(NSString *)characters;
-(double)timestamp;
-(NSString *)charactersIgnoringModifiers;
-(unsigned short)keyCode;
-(unsigned)modifierFlags;
-(BOOL)isGesture;
-(NSString *)inputManagerHint;
-(unsigned)touchCount;
-(unsigned long long)keyboardFlags;
-(CGPoint)locationInWindow;
-(float)deltaX;
-(float)deltaY;
-(BOOL)isKeyRepeating;
-(float)gestureScale;
-(float)gestureRotation;
-(NSArray *)touchIdentifiers;
-(NSArray *)touchLocations;
-(NSArray *)touchPhases;
-(void)setWasHandled:(BOOL)arg1 ;
-(id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(CGPoint)arg3 modifiers:(unsigned)arg4 ;
-(id)_touchPhaseDescription:(int)arg1 ;
-(id)_touchLocationsDescription:(id)arg1 ;
-(id)_touchIdentifiersDescription;
-(id)_touchPhasesDescription;
-(id)_typeDescription;
-(id)_eventDescription;
-(id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(CGPoint)arg3 ;
-(id)initWithScrollWheelEventWithTimeStamp:(double)arg1 location:(CGPoint)arg2 deltaX:(float)arg3 deltaY:(float)arg4 ;
-(id)initWithTouchEventType:(int)arg1 timeStamp:(double)arg2 location:(CGPoint)arg3 modifiers:(unsigned)arg4 touchCount:(unsigned)arg5 touchLocations:(id)arg6 touchIdentifiers:(id)arg7 touchPhases:(id)arg8 isGesture:(BOOL)arg9 gestureScale:(float)arg10 gestureRotation:(float)arg11 ;
-(id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned)arg5 isRepeating:(BOOL)arg6 withFlags:(unsigned long long)arg7 withInputManagerHint:(id)arg8 keyCode:(unsigned short)arg9 isTabKey:(BOOL)arg10 ;
-(id)_modiferFlagsDescription;
-(BOOL)isTabKey;
-(BOOL)wasHandled;
@end

