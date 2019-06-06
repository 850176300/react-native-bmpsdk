#import <BaiduMapAPI_Base/BMKUserLocation.h>

@interface RCTUserLocation : BMKUserLocation

- (instancetype)initWithCLLocation:(CLLocation *)cllocation;
- (void)updateWithCLLocation:(CLLocation *)cllocation;
- (id)json;

@end
