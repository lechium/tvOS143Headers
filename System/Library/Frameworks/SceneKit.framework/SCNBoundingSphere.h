/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SceneKit/SceneKit-Structs.h>
@interface SCNBoundingSphere : NSObject {

	SCNVector3 center;
	double radius;

}

@property (assign,nonatomic) SCNVector3 center; 
@property (assign,nonatomic) double radius; 
-(id)description;
-(SCNVector3)center;
-(void)setCenter:(SCNVector3)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
@end
