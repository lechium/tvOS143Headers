/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface UIAcceleration : NSObject {

	double _timestamp;
	double _x;
	double _y;
	double _z;

}

@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,x,nonatomic) double x;                    //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) double y;                    //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) double z;                    //@synthesize z=_z - In the implementation block
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(double)x;
-(void)setX:(double)arg1 ;
-(double)y;
-(void)setY:(double)arg1 ;
-(double)z;
-(void)setZ:(double)arg1 ;
@end
