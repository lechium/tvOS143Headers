/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchRemote/TRResponseMessage.h>

@class AKAnisetteData;

@interface TRFetchAnisetteDataResponse : TRResponseMessage {

	AKAnisetteData* _anisetteData;

}

@property (nonatomic,copy) AKAnisetteData * anisetteData;              //@synthesize anisetteData=_anisetteData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(AKAnisetteData *)anisetteData;
-(void)setAnisetteData:(AKAnisetteData *)arg1 ;
@end

