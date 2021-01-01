/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <Photos/PHResourceRequest.h>

@class PHVideoRequestBehaviorSpec;

@interface PHVideoXPCRequest : PHResourceRequest {

	PHVideoRequestBehaviorSpec* _behaviorSpec;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                            //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) PHVideoRequestBehaviorSpec * behaviorSpec;              //@synthesize behaviorSpec=_behaviorSpec - In the implementation block
+(BOOL)supportsSecureCoding;
-(CGSize)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PHVideoRequestBehaviorSpec *)behaviorSpec;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 size:(CGSize)arg3 behavior:(id)arg4 ;
@end

