/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNTCC;
@interface CNTCC : NSObject {

	id<CNTCC> _tccServices;

}

@property (nonatomic,retain) id<CNTCC> tccServices;              //@synthesize tccServices=_tccServices - In the implementation block
+(id)sharedInstance;
-(id<CNTCC>)tccServices;
-(void)setTccServices:(id<CNTCC>)arg1 ;
-(int)accessPreflight;
-(void)simulate:(long long)arg1 ;
@end
