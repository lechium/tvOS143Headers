/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VNFaceprint;

@interface VCPFaceTimeFace : NSObject {

	VNFaceprint* _faceprint;

}

@property (nonatomic,retain) VNFaceprint * faceprint;              //@synthesize faceprint=_faceprint - In the implementation block
+(id)face;
+(id)faceFromManagedObject:(id)arg1 ;
-(id)description;
-(VNFaceprint *)faceprint;
-(void)setFaceprint:(VNFaceprint *)arg1 ;
-(id)managedObjectForContext:(id)arg1 ;
@end

