//
//  GVNotificationAlertController.h
//  sdkm
//
//  Created by Mobile on 19.12.18.
//  Copyright © 2018 BMA. All rights reserved.
//

#import "GVBaseNavController.h"
#import "GVNotification.h"

//NS_ASSUME_NONNULL_BEGIN

@interface GVNotificationAlertController : GVBaseNavController

@property (weak, nonatomic) IBOutlet UILabel *lblMessage;
@property (weak, nonatomic) IBOutlet UILabel *lblQuestion;

@property (weak, nonatomic) IBOutlet UIButton *btnYes;
@property (weak, nonatomic) IBOutlet UIButton *btnNo;
@property (weak, nonatomic) IBOutlet UIButton *btnGotIt;

@property (strong, nonatomic) GVNotification *notification;

@end

//NS_ASSUME_NONNULL_END
