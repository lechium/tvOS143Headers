/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AXReplayableGesture : NSObject <NSSecureCoding> {

	NSArray* _allEvents;
	BOOL _arePointsDeviceRelative;

}
+(BOOL)supportsSecureCoding;
+(id)tapGestureForInterfaceOrientedPoint:(CGPoint)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)numberOfEvents;
-(id)fingerIdentifiersAtEventIndex:(unsigned long long)arg1 ;
-(double)timeAtEventIndex:(unsigned long long)arg1 ;
-(CGPoint)pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2 ;
-(double)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2 ;
-(BOOL)arePointsDeviceRelative;
-(void)updateForLandscape:(BOOL)arg1 ;
@end

